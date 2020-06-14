//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/_LSQuery.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _LSAvailableApplicationsForURLQuery : _LSQuery
{
    NSURL *_URL;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_requiresDatabaseMappingEntitlement;
- (_Bool)_shouldCacheResolvedResults;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end
