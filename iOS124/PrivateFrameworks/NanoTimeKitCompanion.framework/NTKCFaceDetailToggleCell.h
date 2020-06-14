//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class UISwitch;
@protocol NTKCFaceDetailToggleCellDelegate;

@interface NTKCFaceDetailToggleCell : NTKCDetailTableViewCell
{
    id <NTKCFaceDetailToggleCellDelegate> _delegate;
    UISwitch *_toggle;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UISwitch *toggle; // @synthesize toggle=_toggle;
@property(nonatomic) __weak id <NTKCFaceDetailToggleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_switchToggled;
@property(nonatomic) _Bool on;
- (id)init;
- (double)rowHeight;

@end

