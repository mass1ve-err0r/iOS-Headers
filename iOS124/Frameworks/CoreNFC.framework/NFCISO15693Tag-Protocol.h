//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NFCTag-Protocol.h>

@class NFCISO15693CustomCommandConfiguration, NFCISO15693ReadMultipleBlocksConfiguration, NSData;

@protocol NFCISO15693Tag <NFCTag>
@property(readonly, copy, nonatomic) NSData *icSerialNumber;
@property(readonly, nonatomic) unsigned long long icManufacturerCode;
@property(readonly, copy, nonatomic) NSData *identifier;
- (void)readMultipleBlocksWithConfiguration:(NFCISO15693ReadMultipleBlocksConfiguration *)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
- (void)sendCustomCommandWithConfiguration:(NFCISO15693CustomCommandConfiguration *)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
@end

