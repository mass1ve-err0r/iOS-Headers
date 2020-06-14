//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIKBRTKeyboardTouchObserver.h>

@class NSMapTable, NSMutableDictionary, UIView, _UIKBRTFingerDetectionView, _UIKBRTFingerInfo;

__attribute__((visibility("hidden")))
@interface _UIKBRTFingerDetection : _UIKBRTKeyboardTouchObserver
{
    UIView *_feedbackParentView;
    _UIKBRTFingerDetectionView *_feedbackView;
    NSMapTable *_fingerFeedbackViewMap;
    NSMutableDictionary *_touches;
    _UIKBRTFingerInfo *_fakeLeftIndex;
    _UIKBRTFingerInfo *_fakeRightIndex;
}

@property(retain, nonatomic) _UIKBRTFingerInfo *fakeRightIndex; // @synthesize fakeRightIndex=_fakeRightIndex;
@property(retain, nonatomic) _UIKBRTFingerInfo *fakeLeftIndex; // @synthesize fakeLeftIndex=_fakeLeftIndex;
@property(retain, nonatomic) NSMutableDictionary *touches; // @synthesize touches=_touches;
@property(retain, nonatomic) NSMapTable *fingerFeedbackViewMap; // @synthesize fingerFeedbackViewMap=_fingerFeedbackViewMap;
@property(retain, nonatomic) _UIKBRTFingerDetectionView *feedbackView; // @synthesize feedbackView=_feedbackView;
@property(nonatomic) UIView *feedbackParentView; // @synthesize feedbackParentView=_feedbackParentView;
- (void).cxx_destruct;
- (void)_updateFingerFeedback:(id)arg1;
- (void)_updateFingerFeedback;
- (void)_updateTouchInfoForFingerID:(unsigned long long)arg1;
- (void)_updateTouchInfoFromOutsideInWithArray:(id)arg1 indexes:(id)arg2 newIdentityDict:(id)arg3 fakeIndex:(id)arg4;
- (_Bool)_linkTouchesInArray:(id)arg1 withIndexes:(id)arg2 opposingHandIndexes:(id)arg3 unassignedIndexes:(id)arg4 thumb:(id)arg5;
- (id)fingerIdsRelatedToTouchWithIdentifier:(id)arg1 sinceTimestamp:(double)arg2 includeThumbs:(_Bool)arg3;
- (struct CGPoint)touchLocationForFingerId:(unsigned long long)arg1;
- (id)touchIdentifiersForFingerId:(unsigned long long)arg1;
- (unsigned long long)fingerIdForTouchWithIdentifier:(id)arg1;
- (void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(_Bool)arg2;
- (void)moveTouchWithIdentifier:(id)arg1 toLocation:(struct CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4;
- (void)addTouchLocation:(struct CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4;
- (void)updateWithFCenter:(struct CGPoint)arg1 jCenter:(struct CGPoint)arg2 keySize:(struct CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5;
- (void)reset;
- (void)dealloc;
- (id)initWithParentView:(id)arg1;
- (id)init;

@end

