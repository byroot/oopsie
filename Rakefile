# frozen_string_literal: true

require "bundler/gem_tasks"
require "rake/testtask"

Rake::TestTask.new(:test) do |t|
  t.libs << "test"
  t.libs << "lib"
  t.test_files = FileList["test/**/test_*.rb"]
end

require "rake/extensiontask"

task build: :compile

GEMSPEC = Gem::Specification.load("oopsie.gemspec")

Rake::ExtensionTask.new("oopsie", GEMSPEC) do |ext|
  ext.lib_dir = "lib/oopsie"
end

task default: %i[clobber compile test]
