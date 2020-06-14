//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class UISwitch;

@interface PKSettingTableCell : PKTableViewCell
{
    id _target;
    SEL _action;
    UISwitch *_settingSwitch;
}

@property(retain, nonatomic) UISwitch *settingSwitch; // @synthesize settingSwitch=_settingSwitch;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic, getter=isOn) _Bool on;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end

