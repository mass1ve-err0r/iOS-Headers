//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionItemView.h>

@class NSArray, NSLayoutConstraint, NSString, UIImage, _MKRightImageButton, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceSectionHeaderView : MKPlaceSectionItemView
{
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    NSLayoutConstraint *_seeMoreBaselineConstraint;
    NSLayoutConstraint *_seeMoreCenterYConstraint;
    _Bool _contentChanged;
    double _width;
    _Bool _showSeeMoreButton;
    NSString *_seeMoreButtonText;
    NSString *_providerName;
    _MKUILabel *_sectionHeaderLabel;
    _MKRightImageButton *_seeMoreButton;
    NSArray *_seeMoreButtonConstraints;
    NSArray *_constraints;
    SEL _action;
    id _target;
    struct CGSize _iconDisplaySize;
}

@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSArray *seeMoreButtonConstraints; // @synthesize seeMoreButtonConstraints=_seeMoreButtonConstraints;
@property(retain, nonatomic) _MKRightImageButton *seeMoreButton; // @synthesize seeMoreButton=_seeMoreButton;
@property(retain, nonatomic) _MKUILabel *sectionHeaderLabel; // @synthesize sectionHeaderLabel=_sectionHeaderLabel;
@property(nonatomic) _Bool showSeeMoreButton; // @synthesize showSeeMoreButton=_showSeeMoreButton;
@property(nonatomic) struct CGSize iconDisplaySize; // @synthesize iconDisplaySize=_iconDisplaySize;
@property(retain, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) UIImage *icon;
@property(retain, nonatomic) NSString *seeMoreButtonText; // @synthesize seeMoreButtonText=_seeMoreButtonText;
- (void)updateConstraints;
- (void)updateContent;
- (void)createConstraints;
- (_Bool)shouldStack;
- (void)contentSizeDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

