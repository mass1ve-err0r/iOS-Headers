//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationBezelBaseTextView.h>

@class NTKColoringLabel;

@interface NTKStopwatchRichComplicationBezelView : NTKRichComplicationBezelBaseTextView
{
    NTKColoringLabel *_textLabel;
}

- (void).cxx_destruct;
- (void)_updateTextProvider;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_applyPausedUpdate;
- (id)_createLabelViewWithFont:(id)arg1;

@end

