//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDatePicker.h>

@interface FIUIHealthSettingsDatePicker : UIDatePicker
{
    CDUnknownBlockType _dateUpdateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType dateUpdateHandler; // @synthesize dateUpdateHandler=_dateUpdateHandler;
- (void).cxx_destruct;
- (void)forceUpdate;
- (void)_dateDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

