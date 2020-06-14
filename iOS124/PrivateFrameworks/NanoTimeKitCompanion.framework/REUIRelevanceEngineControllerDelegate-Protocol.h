//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSIndexPath, REContent, REUIRelevanceEngineController;

@protocol REUIRelevanceEngineControllerDelegate <NSObject>
- (void)engineController:(REUIRelevanceEngineController *)arg1 didMoveContent:(REContent *)arg2 fromIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4;
- (void)engineController:(REUIRelevanceEngineController *)arg1 didInsertContent:(REContent *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)engineController:(REUIRelevanceEngineController *)arg1 didRemoveContent:(REContent *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)engineController:(REUIRelevanceEngineController *)arg1 didReloadContent:(REContent *)arg2 atIndexPath:(NSIndexPath *)arg3;

@optional
- (_Bool)engineController:(REUIRelevanceEngineController *)arg1 isElementAtIndexPathVisible:(NSIndexPath *)arg2;
- (void)engineController:(REUIRelevanceEngineController *)arg1 performBatchUpdateBlock:(void (^)(void))arg2 completion:(void (^)(void))arg3;
@end

