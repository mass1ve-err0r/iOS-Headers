//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIBarItem.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UISpringLoadedInteractionSupporting-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, UIBarButtonItemGroup, UIColor, UIImage, UILayoutGuide, UINavigationItem, UIToolbarButton, UIView;
@protocol _UIBarButtonItemViewOwner;

@interface UIBarButtonItem : UIBarItem <UISpringLoadedInteractionSupporting, NSCoding>
{
    NSString *_title;
    NSSet *_possibleTitles;
    SEL _action;
    id _target;
    UIImage *_image;
    UIImage *_landscapeImagePhone;
    struct UIEdgeInsets _imageInsets;
    struct UIEdgeInsets _landscapeImagePhoneInsets;
    struct UIEdgeInsets _additionalSelectionInsets;
    double _width;
    UIView *_view;
    id _appearanceStorage;
    struct {
        unsigned int enabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
        unsigned int systemItem:7;
        unsigned int viewIsCustom:1;
        unsigned int isMinibarView:1;
        unsigned int disableAutosizing:1;
        unsigned int selected:1;
        unsigned int imageHasEffects:1;
        unsigned int actsAsFakeBackButton:1;
        unsigned int springLoaded:1;
        unsigned int showsChevron:1;
        unsigned int wantsThreeUp:1;
    } _barButtonItemFlags;
    NSArray *_gestureRecognizers;
    NSArray *_interactions;
    _Bool _flexible;
    _Bool __showsBackButtonIndicator;
    _Bool __hidden;
    _Bool __viewWantsLetterpressImage;
    _Bool __needsViewUpdateForLetterpressImage;
    _Bool _groupRepresentative;
    double _toolbarCharge;
    double _minimumWidth;
    double _maximumWidth;
    NSSet *_possibleSystemItems;
    NSDictionary *_stylesForSizingTitles;
    UIBarButtonItem *__itemVariation;
    UINavigationItem *__owningNavigationItem;
    UIBarButtonItemGroup *__owningButtonGroup;
    id <_UIBarButtonItemViewOwner> __viewOwner;
    CDUnknownBlockType __autoValidationHandler;
    UILayoutGuide *__popoverLayoutGuide;
    NSArray *__backButtonAlternateTitles;
    UIBarButtonItemGroup *_buttonGroup;
}

+ (id)_appearanceBlindViewClasses;
+ (Class)classForToolbarButton;
+ (Class)classForNavigationButton;
+ (void)_getSystemItemStyle:(long long *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(long long)arg6 landscape:(_Bool)arg7 alwaysBordered:(_Bool)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10;
@property(readonly, nonatomic) _Bool groupRepresentative; // @synthesize groupRepresentative=_groupRepresentative;
@property(readonly, nonatomic) __weak UIBarButtonItemGroup *buttonGroup; // @synthesize buttonGroup=_buttonGroup;
@property(readonly, nonatomic) _Bool _needsViewUpdateForLetterpressImage; // @synthesize _needsViewUpdateForLetterpressImage=__needsViewUpdateForLetterpressImage;
@property(readonly, nonatomic) _Bool _viewWantsLetterpressImage; // @synthesize _viewWantsLetterpressImage=__viewWantsLetterpressImage;
@property(copy, nonatomic, setter=_setBackButtonAlternateTitles:) NSArray *_backButtonAlternateTitles; // @synthesize _backButtonAlternateTitles=__backButtonAlternateTitles;
@property(retain, nonatomic, setter=_setPopoverLayoutGuide:) UILayoutGuide *_popoverLayoutGuide; // @synthesize _popoverLayoutGuide=__popoverLayoutGuide;
@property(copy, nonatomic, setter=_setAutoValidationHandler:) CDUnknownBlockType _autoValidationHandler; // @synthesize _autoValidationHandler=__autoValidationHandler;
@property(nonatomic, setter=_setViewOwner:) __weak id <_UIBarButtonItemViewOwner> _viewOwner; // @synthesize _viewOwner=__viewOwner;
@property(nonatomic, setter=_setOwningButtonGroup:) __weak UIBarButtonItemGroup *_owningButtonGroup; // @synthesize _owningButtonGroup=__owningButtonGroup;
@property(nonatomic, setter=_setOwningNavigationItem:) __weak UINavigationItem *_owningNavigationItem; // @synthesize _owningNavigationItem=__owningNavigationItem;
@property(nonatomic, setter=_setHidden:) _Bool _hidden; // @synthesize _hidden=__hidden;
@property(nonatomic, setter=_setShowsBackButtonIndicator:) _Bool _showsBackButtonIndicator; // @synthesize _showsBackButtonIndicator=__showsBackButtonIndicator;
@property(retain, nonatomic, setter=_setItemVariation:) UIBarButtonItem *_itemVariation; // @synthesize _itemVariation=__itemVariation;
@property(copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles; // @synthesize _stylesForSizingTitles;
@property(nonatomic, setter=_setFlexible:) _Bool _flexible; // @synthesize _flexible;
@property(nonatomic, setter=_setMaximumWidth:) double _maximumWidth; // @synthesize _maximumWidth;
@property(nonatomic, setter=_setMinimumWidth:) double _minimumWidth; // @synthesize _minimumWidth;
@property(nonatomic, setter=_setToolbarCharge:) double _toolbarCharge; // @synthesize _toolbarCharge;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL action; // @synthesize action=_action;
- (void).cxx_destruct;
- (struct UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (struct UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic) UIColor *tintColor;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (id)_appearanceStorage;
@property(nonatomic) _Bool selected;
@property(copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems; // @synthesize possibleSystemItems=_possibleSystemItems;
- (void)_setSystemItem:(long long)arg1;
@property(readonly, nonatomic) long long systemItem;
@property(readonly, nonatomic) _Bool isSystemItem;
@property(retain, nonatomic) UIView *customView;
@property(copy, nonatomic) NSSet *possibleTitles;
- (id)itemVariation;
@property(copy, nonatomic, setter=_setPossibleItemVariations:) NSSet *_possibleItemVariations;
- (struct CGRect)_rectForPresenting;
- (id)_viewForPresenting;
- (id)_itemForPresenting;
- (void)_executeValidationHandler;
- (void)_setButtonGroup:(id)arg1 isRepresentative:(_Bool)arg2;
@property(nonatomic) double width;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets)arg1;
- (id)_internalLargeContentSizeImage;
- (struct UIEdgeInsets)largeContentSizeImageInsets;
- (void)setLargeContentSizeImage:(id)arg1;
- (id)largeContentSizeImage;
- (struct UIEdgeInsets)imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)landscapeImagePhoneInsets;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets)arg1;
- (id)landscapeImagePhone;
- (void)setLandscapeImagePhone:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
@property(nonatomic) long long style;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)init;
- (double)_width;
- (void)_setWidth:(double)arg1;
@property(retain, nonatomic, setter=_setInteractions:) NSArray *_interactions;
@property(retain, nonatomic, setter=_setGestureRecognizers:) NSArray *_gestureRecognizers;
- (id)createViewForToolbar:(id)arg1;
- (id)createViewForNavigationItem:(id)arg1;
- (void)_setEnclosingBar:(id)arg1 onItem:(id)arg2;
- (id)_foregroundColorForLetterpressWithView:(id)arg1;
- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;
- (_Bool)_shouldBezelSystemButtonImage;
@property(nonatomic, setter=_setImageHasEffects:) _Bool _imageHasEffects;
@property(readonly, nonatomic) UIToolbarButton *_toolbarButton;
@property(nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets;
- (void)_setMiniImageInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_miniImageInsets;
- (void)_setMiniImage:(id)arg1;
- (id)_miniImage;
- (void)_setWantsThreeUp:(_Bool)arg1;
- (_Bool)_wantsThreeUp;
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded;
- (void)_setShowsChevron:(_Bool)arg1;
- (_Bool)_showsChevron;
- (void)_setActsAsFakeBackButton:(_Bool)arg1;
- (_Bool)_actsAsFakeBackButton;
- (id)_imageForState:(unsigned long long)arg1 metrics:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (_Bool)hasImage;
- (_Bool)hasTitle;
- (id)resolvedTitle;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (_Bool)isSpaceItem;
- (_Bool)isCustomViewItem;
- (void)setIsMinibarView:(_Bool)arg1;
- (_Bool)isMinibarView;
- (id)view;
- (void)setView:(id)arg1;
- (id)nextResponder;
- (id)window;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)_updateView;
- (void)_getToolbarSystemItemEdgeInsetsWithImageInsets:(struct UIEdgeInsets *)arg1 forBarStyle:(long long)arg2 landscape:(_Bool)arg3 alwaysBordered:(_Bool)arg4;
- (double)_rightImagePaddingForEdgeMarginInNavBar;
- (double)_leftImagePaddingForEdgeMarginInNavBar;
- (_Bool)_isImageBarButtonItem;
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize *)arg1 imageInsets:(struct UIEdgeInsets *)arg2 landscape:(_Bool)arg3;
- (void)_getSystemItemStyle:(long long *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(long long)arg6 landscape:(_Bool)arg7 alwaysBordered:(_Bool)arg8;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

