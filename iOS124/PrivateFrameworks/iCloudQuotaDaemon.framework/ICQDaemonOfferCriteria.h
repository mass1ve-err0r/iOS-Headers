//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ICQDaemonOfferCriteria : NSObject
{
    NSDictionary *_serverDict;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *serverDictionary;
- (id)initWithServerDictionary:(id)arg1;
- (_Bool)isSatisfiedByConditions:(id)arg1;

@end

