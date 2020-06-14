//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCCoder.h>

@class NSObject, NSXPCConnection;
@protocol NSXPCEncoderDelegate, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NSXPCEncoder : NSXPCCoder
{
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCConnection *_connection;
    struct __CFDictionary *_replacedByDelegateObjects;
    id <NSXPCEncoderDelegate> _delegate;
    struct {
        unsigned long long collectionSizeOffset[384];
        long long collectionRecursionIndex;
        unsigned long long dataLen;
        unsigned long long dataSize;
        char *data;
        _Bool isVM;
        _Bool isStack;
    } _encoder;
    unsigned long long _genericIndex;
    _Bool _topLevelDictionary;
    _Bool _finished;
    _Bool _askForReplacement;
}

@property id <NSXPCEncoderDelegate> delegate; // @synthesize delegate=_delegate;
@property NSXPCConnection *_connection; // @synthesize _connection;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (void)_encodeCString:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)_encodeInvocationObjectArgumentsOnly:(id *)arg1 count:(unsigned long long)arg2 typeString:(const char *)arg3 selector:(SEL)arg4 isReply:(_Bool)arg5 into:(id)arg6;
- (void)_encodeInvocation:(id)arg1 isReply:(_Bool)arg2 into:(id)arg3;
- (id)_newRootXPCObject;
- (void)_startTopLevelDictionary;
- (void)_encodeUnkeyedObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_encodeObject:(id)arg1;
- (void)_checkObject:(id)arg1;
- (id)_replaceObject:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeDataObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (_Bool)allowsKeyedCoding;
- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (id)initWithStackSpace:(char *)arg1 size:(unsigned long long)arg2;
- (id)connection;

@end

