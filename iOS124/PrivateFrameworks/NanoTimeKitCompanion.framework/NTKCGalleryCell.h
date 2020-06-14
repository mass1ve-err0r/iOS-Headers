//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <NanoTimeKitCompanion/UICollectionViewDataSource-Protocol.h>
#import <NanoTimeKitCompanion/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSLayoutConstraint, NSString, NTKCGalleryCollection, UICollectionView, UICollectionViewFlowLayout, UILabel, UIStackView, _NTKCAddNewFace;
@protocol NTKCGalleryCellDelegate;

@interface NTKCGalleryCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    _Bool _hasCalloutName;
    _Bool _hasCalloutImage;
    NTKCGalleryCollection *_collection;
    id <NTKCGalleryCellDelegate> _delegate;
    long long _selectedIndex;
    UILabel *_title;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_faceContainerTopConstraint;
    NSLayoutConstraint *_leadingInsetConstraint;
    NSLayoutConstraint *_cvHeightConstraint;
    UIStackView *_titleStack;
    UIStackView *_collectionViewFooterStack;
    UILabel *_footer;
    _NTKCAddNewFace *_addNewFace;
    struct CGSize _itemSize;
}

+ (double)rowHeightForCollection:(id)arg1;
+ (id)reuseIdentifier;
@property(retain, nonatomic) _NTKCAddNewFace *addNewFace; // @synthesize addNewFace=_addNewFace;
@property(retain, nonatomic) UILabel *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UIStackView *collectionViewFooterStack; // @synthesize collectionViewFooterStack=_collectionViewFooterStack;
@property(retain, nonatomic) UIStackView *titleStack; // @synthesize titleStack=_titleStack;
@property(retain, nonatomic) NSLayoutConstraint *cvHeightConstraint; // @synthesize cvHeightConstraint=_cvHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingInsetConstraint; // @synthesize leadingInsetConstraint=_leadingInsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *faceContainerTopConstraint; // @synthesize faceContainerTopConstraint=_faceContainerTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint; // @synthesize titleBaselineConstraint=_titleBaselineConstraint;
@property(nonatomic) _Bool hasCalloutImage; // @synthesize hasCalloutImage=_hasCalloutImage;
@property(nonatomic) _Bool hasCalloutName; // @synthesize hasCalloutName=_hasCalloutName;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <NTKCGalleryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NTKCGalleryCollection *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (_Bool)shouldShowFooterTextInCollectionView;
- (_Bool)hasFooterText;
- (_Bool)_shouldShowAddNewFace;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)previewViewAndRect:(struct CGRect *)arg1 forFace:(id)arg2;
- (id)faceForLocation:(struct CGPoint)arg1;
- (void)updateFaceAtIndex:(unsigned long long)arg1;
- (struct CGPoint)_contentInsetPoint;
@property(nonatomic) struct CGPoint contentOffset;
- (void)showFooterTextIfNeeded;
- (void)calculateHeightForCollection;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)ensureCorrectTitleViewOrientation;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

