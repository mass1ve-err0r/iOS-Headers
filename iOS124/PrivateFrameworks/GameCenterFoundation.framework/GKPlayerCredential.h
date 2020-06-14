//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSDate, NSString;

@interface GKPlayerCredential : GKInternalRepresentation
{
    NSString *_accountName;
    NSString *_authenticationToken;
    GKPlayerInternal *_playerInternal;
    long long _environment;
    unsigned int _scope;
    NSDate *_scopeModificationDate;
    NSString *_altDSID;
    NSString *_DSID;
    NSString *_rawPassword;
}

+ (id)secureCodedPropertyKeys;
@property(retain) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property(retain) NSString *DSID; // @synthesize DSID=_DSID;
@property(retain) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain) NSDate *scopeModificationDate; // @synthesize scopeModificationDate=_scopeModificationDate;
@property unsigned int scope; // @synthesize scope=_scope;
@property long long environment; // @synthesize environment=_environment;
@property(retain) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain) GKPlayerInternal *playerInternal; // @synthesize playerInternal=_playerInternal;
- (id)description;
@property(readonly) NSString *scopeAsString;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

