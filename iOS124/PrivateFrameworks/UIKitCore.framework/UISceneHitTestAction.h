//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@interface UISceneHitTestAction : BSAction
{
}

- (long long)UIActionType;
- (void)sendResponse:(id)arg1;
@property(readonly, nonatomic) struct CGPoint touchLocation;
- (id)initWithTouchLocation:(struct CGPoint)arg1 responseHandler:(CDUnknownBlockType)arg2;

@end

