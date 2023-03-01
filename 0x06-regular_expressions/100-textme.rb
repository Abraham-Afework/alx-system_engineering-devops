#!/usr/bin/env ruby
puts [ARGV[0].scan(/(?:\[from:(.\w+)\])/),ARGV[0].scan(/(?:\[to:(.\w+)\])/),ARGV[0].scan(/(?:flags:([-[0-1]:[0-1]]+))/)].join(",")
