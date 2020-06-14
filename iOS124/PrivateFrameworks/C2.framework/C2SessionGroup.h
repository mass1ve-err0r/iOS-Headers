//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class C2Session, NSArray, NSString;

@interface C2SessionGroup : NSObject
{
    NSString *_configurationName;
    C2Session *_pinnedSessionAllowingExpiredDNS;
    C2Session *_pinnedSession;
    C2Session *_unpinnedSession;
}

@property(retain, nonatomic) C2Session *unpinnedSession; // @synthesize unpinnedSession=_unpinnedSession;
@property(retain, nonatomic) C2Session *pinnedSession; // @synthesize pinnedSession=_pinnedSession;
@property(retain, nonatomic) C2Session *pinnedSessionAllowingExpiredDNS; // @synthesize pinnedSessionAllowingExpiredDNS=_pinnedSessionAllowingExpiredDNS;
@property(retain, nonatomic) NSString *configurationName; // @synthesize configurationName=_configurationName;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)removeSession:(id)arg1;
@property(readonly, nonatomic) NSArray *sessions;
- (void)setSession:(id)arg1 forOptions:(id)arg2;
- (id)sessionForOptions:(id)arg1;
- (id)initWithConfigurationName:(id)arg1;

@end

