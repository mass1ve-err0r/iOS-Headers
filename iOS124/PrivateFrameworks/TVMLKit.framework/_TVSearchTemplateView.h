//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIFocusGuide, UIImageView, UISearchBar, UITapGestureRecognizer, _TVSearchBarWrapper;
@protocol UIFocusEnvironment, _TVSearchTemplateViewDelegate;

__attribute__((visibility("hidden")))
@interface _TVSearchTemplateView : UIView
{
    UIView *_keyboard;
    UISearchBar *_searchBar;
    UICollectionView *_collectionView;
    _Bool _isTouchEnabled;
    _Bool _focusHidden;
    _Bool _partialViewEnabled;
    UIView *_fieldAndKeyboardContainer;
    _TVSearchBarWrapper *_searchBarWrapper;
    NSArray *_keyboardConstraints;
    id <UIFocusEnvironment> _preferredFocusEnvironment;
    UIView *_templateContainerView;
    UIFocusGuide *_keyboardProxy;
    NSArray *_keyboardProxyConstraints;
    UITapGestureRecognizer *_menuRecognizer;
    double _fieldOriginY;
    int _keyboardState;
    int _targetKeyboardState;
    struct {
        unsigned int hasWillAddKeyboard:1;
        unsigned int hasDidAddKeyboard:1;
        unsigned int hasWillRemoveKeyboard:1;
        unsigned int hasDidRemoveKeyboard:1;
        unsigned int hasDidOffsetOrigin:1;
    } _delegateFlags;
    _Bool _spinning;
    id <_TVSearchTemplateViewDelegate> _delegate;
    UIView *_bannerView;
    UIImageView *_bgImageView;
    struct UIEdgeInsets _collectionMargin;
}

@property(nonatomic, getter=isSpinning) _Bool spinning; // @synthesize spinning=_spinning;
@property(readonly, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic, getter=isPartialViewEnabled) _Bool partialViewEnabled; // @synthesize partialViewEnabled=_partialViewEnabled;
@property(nonatomic, getter=isFocusHidden) _Bool focusHidden; // @synthesize focusHidden=_focusHidden;
@property(nonatomic) struct UIEdgeInsets collectionMargin; // @synthesize collectionMargin=_collectionMargin;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak id <_TVSearchTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isTouchEnabled; // @synthesize isTouchEnabled=_isTouchEnabled;
@property(readonly, retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (_Bool)_isSearchFieldVisible;
- (void)_transitionKeyboardOut;
- (void)_transitionKeyboardInAnimated:(_Bool)arg1;
- (void)_addKeyboard;
- (void)_pushKeyboardTowardsStableState:(unsigned long long)arg1;
- (void)_adjustKeyboardContainerPositionForContentOffset:(struct CGPoint)arg1;
- (void)_handleMenuAction:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)willMoveToWindow:(id)arg1;
- (void)stopEditing;
- (void)adjustScrollForContentOffset:(struct CGPoint)arg1;
- (id)initWithCollectionView:(id)arg1 searchBar:(id)arg2 keyboard:(id)arg3 touchEnabled:(_Bool)arg4;

@end

