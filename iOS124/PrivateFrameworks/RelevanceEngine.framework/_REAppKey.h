//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSString;

@interface _REAppKey : NSObject <NSCopying>
{
    _Bool _remote;
    NSString *_identifier;
}

@property(readonly, nonatomic) _Bool remote; // @synthesize remote=_remote;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 remote:(_Bool)arg2;

@end

