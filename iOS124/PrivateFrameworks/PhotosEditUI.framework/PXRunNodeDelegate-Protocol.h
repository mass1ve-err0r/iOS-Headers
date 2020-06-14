//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosEditUI/NSObject-Protocol.h>

@class NSError;
@protocol PXRunNode;

@protocol PXRunNodeDelegate <NSObject>

@optional
- (void)runNode:(id <PXRunNode>)arg1 didCancelWithError:(NSError *)arg2;
- (void)runNode:(id <PXRunNode>)arg1 didCompleteWithError:(NSError *)arg2;
- (void)runNodeWillStartRunning:(id <PXRunNode>)arg1;
@end

