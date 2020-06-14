//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableArray, NSMutableDictionary;

@interface UICollectionViewTransitionLayout : UICollectionViewLayout
{
    UICollectionViewLayout *_fromLayout;
    UICollectionViewLayout *_toLayout;
    struct CGRect _fromVisibleBounds;
    struct CGRect _toVisibleBounds;
    struct CGSize _contentSize;
    _Bool _haveValidInfos;
    double _transitionProgress;
    NSMutableDictionary *_transitionInformationsDict;
    NSMutableDictionary *_currentLayoutInfos;
    _Bool _layoutIsValid;
    NSMutableArray *_disappearingLayoutAttributes;
    NSMutableArray *_appearingLayoutAttributes;
    double _accuracy;
}

@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(readonly, nonatomic) UICollectionViewLayout *nextLayout; // @synthesize nextLayout=_toLayout;
@property(readonly, nonatomic) UICollectionViewLayout *currentLayout; // @synthesize currentLayout=_fromLayout;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)interpolatedLayoutAttributesFromLayoutAttributes:(id)arg1 toLayoutAttributes:(id)arg2 progress:(double)arg3;
- (struct CGSize)collectionViewContentSize;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (double)valueForAnimatedKey:(id)arg1;
- (void)updateValue:(double)arg1 forAnimatedKey:(id)arg2;
- (struct CGRect)_newVisibleBounds;
- (struct CGRect)_oldVisibleBounds;
- (void)prepareLayout;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_finalizeLayoutTransition;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (void)invalidateLayout;
- (void)_setCollectionView:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2;

@end

