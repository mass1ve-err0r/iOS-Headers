//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIHealthSettingsForceUpdatable-Protocol.h>
#import <FitnessUI/UIPickerViewDataSource-Protocol.h>
#import <FitnessUI/UIPickerViewDelegate-Protocol.h>

@class NSString, UIPickerView;

@interface FIUIHealthSettingsPickerController : NSObject <UIPickerViewDelegate, UIPickerViewDataSource, FIUIHealthSettingsForceUpdatable>
{
    _Bool _isMetricLocale;
    UIPickerView *_pickerView;
}

@property(nonatomic) _Bool isMetricLocale; // @synthesize isMetricLocale=_isMetricLocale;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void).cxx_destruct;
- (void)forceUpdate;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
