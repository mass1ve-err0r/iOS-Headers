//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface IDSGlobalLinkMessage : NSObject
{
    long long _command;
    NSData *_hmacKeyData;
    struct IDSGlobalLinkAttribute _attributes[20];
    int _numAttribute;
}

+ (id)messageWithBuffer:(char *)arg1 length:(int)arg2;
+ (id)messageWithCommand:(long long)arg1 attributes:(id)arg2;
@property(readonly) NSData *hmacKeyData; // @synthesize hmacKeyData=_hmacKeyData;
@property(readonly, nonatomic) long long command; // @synthesize command=_command;
- (void).cxx_destruct;
- (_Bool)read:(char *)arg1 inputLength:(int)arg2;
- (_Bool)write:(char *)arg1 outputLength:(int *)arg2;
- (_Bool)verifyHMacDigestWithKey:(id)arg1 inputBuffer:(char *)arg2 inputLength:(int)arg3;
- (_Bool)getAttribute:(long long)arg1 attribute:(struct IDSGlobalLinkAttribute *)arg2;
- (void)setAttributes:(id)arg1;
- (void)_addBinaryDataAttribute:(long long)arg1 value:(id)arg2;
- (void)_addUInt64Attribute:(long long)arg1 value:(unsigned long long)arg2;
- (void)_addUInt32Attribute:(long long)arg1 value:(unsigned int)arg2;
- (void)_addUInt16Attribute:(long long)arg1 value:(unsigned short)arg2;
- (void)_addAddressAttribute:(long long)arg1 value:(struct sockaddr *)arg2;
- (_Bool)_addAttribute:(struct IDSGlobalLinkAttribute *)arg1;
- (void)dealloc;
- (id)initWithCommand:(long long)arg1;

@end

