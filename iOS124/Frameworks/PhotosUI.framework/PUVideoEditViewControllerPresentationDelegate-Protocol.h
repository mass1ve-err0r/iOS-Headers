//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSDate, PUVideoEditViewController;
@protocol PUEditableAsset;

@protocol PUVideoEditViewControllerPresentationDelegate <NSObject>

@optional
- (void)videoEditViewController:(PUVideoEditViewController *)arg1 didFinishPreparingForTransitionAfterEditingAsset:(id <PUEditableAsset>)arg2 modificationDate:(NSDate *)arg3 seekTime:(CDStruct_1b6d18a9)arg4;
@end

