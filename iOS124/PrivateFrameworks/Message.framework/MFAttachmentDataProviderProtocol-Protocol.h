//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/NSObject-Protocol.h>

@class MFAttachment, MFMessage, NSData, NSProgress, NSString;
@protocol MFDataConsumer;

@protocol MFAttachmentDataProviderProtocol <NSObject>
- (NSString *)storageLocationForAttachment:(MFAttachment *)arg1 withMessage:(MFMessage *)arg2;
- (MFMessage *)messageForAttachment:(MFAttachment *)arg1;
- (NSData *)fetchLocalDataForAttachment:(MFAttachment *)arg1;
- (void)fetchDataForAttachment:(MFAttachment *)arg1 consumer:(id <MFDataConsumer>)arg2 progress:(NSProgress *)arg3 completion:(void (^)(_Bool, NSError *, _Bool))arg4;
@end

