//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString;

@interface MSCLDurationFormatter : NSObject
{
    NSString *_durationFormatString;
    NSNumberFormatter *_hoursFormatter;
    NSNumberFormatter *_minutesAndSecondsFormatter;
}

- (void).cxx_destruct;
- (id)stringFromDuration:(double)arg1;
- (id)initWithClientContext:(id)arg1;

@end

