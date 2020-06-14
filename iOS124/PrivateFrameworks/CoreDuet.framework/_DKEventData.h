//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface _DKEventData : NSObject
{
    unsigned long long _version;
    NSData *_event;
    unsigned long long _uncompressedLength;
}

+ (id)createFromData:(id)arg1;
+ (id)fromPBCodable:(id)arg1;
@property(readonly, nonatomic) unsigned long long uncompressedLength; // @synthesize uncompressedLength=_uncompressedLength;
@property(readonly, nonatomic) NSData *event; // @synthesize event=_event;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)asData;
- (id)initWithCompressedData:(id)arg1 uncompressedLength:(unsigned long long)arg2 version:(unsigned long long)arg3;
- (id)initWithData:(id)arg1 version:(unsigned long long)arg2;
- (id)toPBCodable;

@end

