//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface HMDAudioStreamCodecType : NSObject <NSCopying>
{
    long long _codecType;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithCodecType:(long long)arg1;
- (id)init;

@end
