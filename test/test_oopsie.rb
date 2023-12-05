# frozen_string_literal: true

require "test_helper"

class TestOopsie < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil ::Oopsie::VERSION
  end

  def test_it_cause_crashes
    obj = Object.new
    r, w = IO.pipe
    pid = fork do
      r.close
      $stderr.reopen(w)
      Oopsie.crash(obj)
    end
    w.close
    _, status = Process.waitpid2(pid)
    refute_predicate status, :success?
    stderr = r.read
    assert_includes stderr, "[BUG] [Oopsie] #{obj}"
  end
end
