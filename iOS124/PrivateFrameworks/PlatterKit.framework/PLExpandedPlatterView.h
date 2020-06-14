//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PlatterKit/PLContentSizeCategoryAdjusting-Protocol.h>
#import <PlatterKit/PLExpandedPlatter-Protocol.h>
#import <PlatterKit/PLTitled-Protocol.h>
#import <PlatterKit/UIGestureRecognizerDelegate-Protocol.h>
#import <PlatterKit/UIScrollViewDelegate-Protocol.h>

@class MTMaterialView, NSArray, NSDate, NSString, NSTimeZone, PLInterfaceActionGroupView, PLPlatterHeaderContentView, UIButton, UIControl, UIScrollView;
@protocol PLExpandedPlatterViewDelegate;

@interface PLExpandedPlatterView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, PLExpandedPlatter, PLTitled, PLContentSizeCategoryAdjusting>
{
    PLPlatterHeaderContentView *_headerContentView;
    UIView *_headerDivider;
    UIView *_contentView;
    UIView *_topRubberbandingView;
    UIView *_customContentView;
    MTMaterialView *_actionsBackgroundView;
    PLInterfaceActionGroupView *_actionsView;
    _Bool _actionsHidden;
    _Bool _clipsVisibleContentToBounds;
    UIScrollView *_scrollView;
    UIControl *_dismissControl;
    double _contentBottomInset;
    long long _dismissControlPosition;
    id <PLExpandedPlatterViewDelegate> _delegate;
    UIView *_mainContentView;
    struct CGSize _customContentSize;
}

@property(retain, nonatomic, getter=_mainContentView) UIView *mainContentView; // @synthesize mainContentView=_mainContentView;
@property(nonatomic) __weak id <PLExpandedPlatterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long dismissControlPosition; // @synthesize dismissControlPosition=_dismissControlPosition;
@property(nonatomic) double contentBottomInset; // @synthesize contentBottomInset=_contentBottomInset;
@property(nonatomic) _Bool clipsVisibleContentToBounds; // @synthesize clipsVisibleContentToBounds=_clipsVisibleContentToBounds;
@property(nonatomic) struct CGSize customContentSize; // @synthesize customContentSize=_customContentSize;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)_layoutActionsView;
- (void)_layoutContentView;
- (void)_layoutTopRubberbandingView;
- (void)_layoutScrollView;
- (void)_layoutHeader;
- (void)_layoutDismissControl;
- (void)_configureActionViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsBackgroundViewIfNecessaryWithActions:(id)arg1;
- (void)_configureCustomContentViewIfNecessary;
- (void)_configureContentViewIfNecessary;
- (void)_configureScrollViewIfNecessary;
- (void)_configureHeaderContentViewIfNecessary;
- (void)_configureDismissControlIfNecessary;
@property(readonly, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
- (struct CGSize)_actionsSizeThatFits:(struct CGSize)arg1 includingPadding:(_Bool)arg2;
- (struct CGSize)_sizeThatFitsContentExcludingActionsWithSize:(struct CGSize)arg1;
- (struct CGRect)_boundsInsetFromDismissControlIfNecessary;
- (struct UIEdgeInsets)_dismissControlTotalOutset;
@property(retain, nonatomic) NSArray *interfaceActions;
- (struct CGRect)_contentViewFrame;
- (struct CGRect)scrollViewFrame;
- (struct CGRect)platterFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)frameForPlatterFrame:(struct CGRect)arg1;
- (struct CGSize)actionsSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)contentSizeExcludingActions;
- (struct CGSize)sizeExcludingActions;
@property(nonatomic, getter=isActionsHidden) _Bool actionsHidden;
@property(readonly, nonatomic) struct UIEdgeInsets dismissControlInsets;
@property(readonly, nonatomic) UIControl *dismissControl; // @synthesize dismissControl=_dismissControl;
@property(readonly, nonatomic) UIButton *utilityButton;
@property(readonly, nonatomic) NSArray *iconButtons;
@property(nonatomic) long long dateFormatStyle;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *icons;
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred;
@property(nonatomic) _Bool hasShadow;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutCustomContentView;
- (void)_layoutMainContentView;
- (struct CGSize)_contentViewSize;
- (struct CGRect)_actionsViewFrame;
- (void)_configureCustomContentView;
- (void)_configureMainContentViewIfNecessary;
- (struct CGSize)_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize)arg1;
- (void)_layoutMainContentViewIfNecessary;
- (struct CGSize)_flexibleAreaSizeForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=_headerContentView) UIView *headerContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

