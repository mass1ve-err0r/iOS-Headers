//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/NSCopying-Protocol.h>
#import <UserActivity/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSFileHandle, NSString;

@interface UASharedPasteboardInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSFileHandle *_dataFile;
    long long _dataSize;
    NSArray *_items;
    NSString *_sharedDataPath;
    NSDictionary *_sandboxExtensions;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSDictionary *sandboxExtensions; // @synthesize sandboxExtensions=_sandboxExtensions;
@property(copy) NSString *sharedDataPath; // @synthesize sharedDataPath=_sharedDataPath;
@property(copy) NSArray *items; // @synthesize items=_items;
@property long long dataSize; // @synthesize dataSize=_dataSize;
@property(retain) NSFileHandle *dataFile; // @synthesize dataFile=_dataFile;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

