//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSCopying-Protocol.h>

@class NSSet, NSString, NSUserDefaults;

@interface NSSUserDefaultsDataDestructionItem : NSObject <NSCopying>
{
    NSUserDefaults *_userDefaults;
    NSString *_domainName;
    NSSet *_stickyKeys;
}

@property(copy, nonatomic) NSSet *stickyKeys; // @synthesize stickyKeys=_stickyKeys;
@property(copy, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserDefaults:(id)arg1 domainName:(id)arg2 stickyKeys:(id)arg3;
- (id)init;

@end

