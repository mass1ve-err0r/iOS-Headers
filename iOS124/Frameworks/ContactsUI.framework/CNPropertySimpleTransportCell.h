//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertySimpleCell.h>

@class CNTransportButton, UIColor, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleTransportCell : CNPropertySimpleCell
{
    CNTransportButton *_transportIcon1;
    CNTransportButton *_transportIcon2;
    CNTransportButton *_transportIcon3;
    UIImageView *_starView;
    _Bool _allowsActions;
    _Bool _shouldShowBadge;
    _Bool _shouldShowTransportButtons;
    UIImageView *_standardStarView;
    UIColor *_actionsColor;
    UIView *_badgeView;
}

+ (id)standardStarView;
+ (void)_updateStarImageForView:(id)arg1;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIColor *actionsColor; // @synthesize actionsColor=_actionsColor;
@property(readonly, nonatomic) UIImageView *standardStarView; // @synthesize standardStarView=_standardStarView;
@property(nonatomic) _Bool shouldShowTransportButtons; // @synthesize shouldShowTransportButtons=_shouldShowTransportButtons;
@property(nonatomic) _Bool shouldShowBadge; // @synthesize shouldShowBadge=_shouldShowBadge;
@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;
- (void).cxx_destruct;
- (void)transportButtonClicked:(id)arg1;
- (_Bool)shouldPerformDefaultAction;
- (id)variableConstraints;
- (id)rightMostView;
- (void)updateStarIcon;
- (void)updateTransportButtons;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateWithPropertyItem:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (void)updateLabelNeedingHuggingContent;
@property(readonly, nonatomic) _Bool shouldShowStar;
@property(readonly, nonatomic) UIView *standardBadgeView;
@property(readonly, nonatomic) CNTransportButton *transportIcon3;
@property(readonly, nonatomic) CNTransportButton *transportIcon2;
@property(readonly, nonatomic) CNTransportButton *transportIcon1;
@property(readonly, nonatomic) CNTransportButton *standardTransportIcon;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

