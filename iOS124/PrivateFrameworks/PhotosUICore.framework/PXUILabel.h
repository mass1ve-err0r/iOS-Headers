//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, PXLabelSpec, UILabel, UIVisualEffectView;

@interface PXUILabel : UIView
{
    UILabel *_label;
    UIVisualEffectView *_visualEffectView;
    NSArray *_labelLayoutConstraints;
    long long _verticalAlignment;
    struct UIEdgeInsets _contentInsets;
    NSString *_text;
    PXLabelSpec *_spec;
}

@property(retain, nonatomic) PXLabelSpec *spec; // @synthesize spec=_spec;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)_configuredText;
- (void)updateConstraints;
- (void)_configureLabel;
- (void)_commonPXMemoriesLabelInitialization;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

