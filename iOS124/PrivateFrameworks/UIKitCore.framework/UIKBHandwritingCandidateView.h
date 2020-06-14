//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKBKeyView.h>

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <UIKitCore/UIKeyboardCandidateList-Protocol.h>

@class NSArray, NSString, TIKeyboardCandidateResultSet, UIKBCandidateCollectionView, UIKeyboardCandidateLogButton, UIKeyboardCandidatePocketShadow;
@protocol UIKeyboardCandidateList, UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingCandidateView : UIKBKeyView <UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <UIKeyboardCandidateListDelegate> _delegate;
    TIKeyboardCandidateResultSet *_candidateResultSet;
    UIKBCandidateCollectionView *_candidatesCollectionView;
    UIKeyboardCandidatePocketShadow *_pocketShadow;
    UIKeyboardCandidatePocketShadow *_leftBorder;
    CDStruct_227bb23d _visualStyling;
    UIKeyboardCandidateLogButton *_logButton;
    unsigned long long _dummyCellCount;
    double _dummyCellWidth;
}

+ (double)shadowYForBounds:(struct CGRect)arg1 shadowHeight:(double)arg2;
+ (Class)cellClass;
@property(nonatomic) double dummyCellWidth; // @synthesize dummyCellWidth=_dummyCellWidth;
@property(nonatomic) unsigned long long dummyCellCount; // @synthesize dummyCellCount=_dummyCellCount;
@property(retain, nonatomic) UIKeyboardCandidateLogButton *logButton; // @synthesize logButton=_logButton;
@property(nonatomic) CDStruct_227bb23d visualStyling; // @synthesize visualStyling=_visualStyling;
@property(retain, nonatomic) UIKeyboardCandidatePocketShadow *leftBorder; // @synthesize leftBorder=_leftBorder;
@property(retain, nonatomic) UIKeyboardCandidatePocketShadow *pocketShadow; // @synthesize pocketShadow=_pocketShadow;
@property(retain, nonatomic) UIKBCandidateCollectionView *candidatesCollectionView; // @synthesize candidatesCollectionView=_candidatesCollectionView;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // @synthesize candidateResultSet=_candidateResultSet;
@property(nonatomic) __weak id <UIKeyboardCandidateListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *candidates;
@property(readonly, nonatomic) id <UIKeyboardCandidateList> candidateList;
- (void)_setRenderConfig:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (id)_inheritedRenderConfig;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)selectAndScrollToCandidateAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)reloadDataByAppendingAtEnd:(_Bool)arg1;
- (id)secureCandidateRenderTraits;
- (double)singleCellWidthForProactiveCellCount:(unsigned long long)arg1;
- (unsigned long long)maxNumberOfProactiveCells;
- (unsigned long long)selectedSortIndex;
- (id)statisticsIdentifier;
- (id)keyboardBehaviors;
- (_Bool)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (id)currentCandidate;
- (_Bool)hasCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (void)showNextPage;
- (void)showCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (_Bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (_Bool)isFloatingList;
- (_Bool)isExtendedList;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)displayLayer:(id)arg1;
- (void)calculateDummyCellAttributes;
- (void)updateLeftBorderForKeyplane:(id)arg1;
- (void)updatePocketShadowForKeyplane:(id)arg1;
- (void)jumpToCompositions;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

