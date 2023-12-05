# Oopsie

Simple binding for `rb_bug` to trigger controlled Ruby crashes

## Usage

```
>> Oopsie.crash("Whoops")
(irb):1: [BUG] [Oopsie] Whoops
ruby 3.2.2 (2023-03-30 revision e51014f9c0) [arm64-darwin22]

-- Crash Report log information --------------------------------------------
   See Crash Report log file in one of the following locations:
     * ~/Library/Logs/DiagnosticReports
     * /Library/Logs/DiagnosticReports
   for more details.
Don't forget to include the above Crash Report log file in bug reports.     

-- Control frame information -----------------------------------------------
...
```

## Development

After checking out the repo, run `bin/setup` to install dependencies. Then, run `rake test` to run the tests. You can also run `bin/console` for an interactive prompt that will allow you to experiment.

To install this gem onto your local machine, run `bundle exec rake install`. To release a new version, update the version number in `version.rb`, and then run `bundle exec rake release`, which will create a git tag for the version, push git commits and the created tag, and push the `.gem` file to [rubygems.org](https://rubygems.org).

## Contributing

Bug reports and pull requests are welcome on GitHub at https://github.com/byroot/oopsie.

## License

The gem is available as open source under the terms of the [MIT License](https://opensource.org/licenses/MIT).
