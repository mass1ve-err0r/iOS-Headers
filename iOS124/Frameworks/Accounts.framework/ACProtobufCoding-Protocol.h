//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/NSObject-Protocol.h>

@class NSData, PBCodable;

@protocol ACProtobufCoding <NSObject>
- (NSData *)_encodeProtobufData;
- (PBCodable *)_encodeProtobuf;
- (id)_initWithProtobufData:(NSData *)arg1;
- (id)_initWithProtobuf:(PBCodable *)arg1;
@end

