//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pasteboard/NSObject-Protocol.h>

@class NSProgress, PBItemRepresentation;

@protocol PBItemRepresentationDataTransferDelegate <NSObject>
- (void)itemRepresentationFinishedDataTransfer:(PBItemRepresentation *)arg1;
- (void)itemRepresentation:(PBItemRepresentation *)arg1 beganDataTransferWithProgress:(NSProgress *)arg2;
@end
