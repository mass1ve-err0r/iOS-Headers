//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFSimpleProgressView.h>

@class NSDateComponentsFormatter;

@interface BFFRestoreProgressView : BFFSimpleProgressView
{
    NSDateComponentsFormatter *_durationFormatter;
}

@property(retain) NSDateComponentsFormatter *durationFormatter; // @synthesize durationFormatter=_durationFormatter;
- (void).cxx_destruct;
- (id)timeRemainingString:(double)arg1;
- (void)setTimeRemainingEstimate:(double)arg1;
- (id)initWithTitle:(id)arg1;

@end

