//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCornerBaseTextView.h>

@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerStackedTextView : NTKRichComplicationCornerBaseTextView
{
    NTKCurvedColoringLabel *_outerLabel;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (id)init;

@end

