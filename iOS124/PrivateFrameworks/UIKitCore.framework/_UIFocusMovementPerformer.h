//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _UIFocusMovementPerformerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusMovementPerformer : NSObject
{
    id <_UIFocusMovementPerformerDelegate> _delegate;
}

@property(nonatomic) __weak id <_UIFocusMovementPerformerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)_minimumSearchAreaForContainer:(id)arg1 inWindow:(id)arg2;
- (void)_loadScrollableContentForFocusMovement:(id)arg1;
- (id)_bestCandidateForFocusMovement:(id)arg1;
- (id)_bestCandidateForLinearFocusMovement:(id)arg1;
- (id)_bestCandidateForNonLinearFocusMovement:(id)arg1;
- (id)_findFocusCandidateBySearchingLinearFocusMovementSequencesForRequest:(id)arg1;
- (id)_findFocusCandidateByExhaustivelySearchingScrollableContainer:(id)arg1 forRequest:(id)arg2;
- (_Bool)_shouldRecordDestinationItemDistanceOffscreenInWindow:(id)arg1;
- (id)_findFocusCandidateWithoutLoadingScrollableContent:(id)arg1 forRequest:(id)arg2 minimumSearchArea:(struct CGRect)arg3;
- (id)viewForFocusHeading:(unsigned long long)arg1 fromView:(id)arg2;
- (_Bool)performFocusMovement:(id)arg1;

@end

