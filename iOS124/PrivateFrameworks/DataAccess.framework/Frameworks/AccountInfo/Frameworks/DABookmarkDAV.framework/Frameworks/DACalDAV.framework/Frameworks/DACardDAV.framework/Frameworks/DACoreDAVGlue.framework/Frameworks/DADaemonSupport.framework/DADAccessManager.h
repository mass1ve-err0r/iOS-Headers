//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccessExpress/DADisableableObject.h>

@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface DADAccessManager : DADisableableObject
{
    NSObject<OS_xpc_object> *_mainConnection;
    NSMutableArray *_clients;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) NSObject<OS_xpc_object> *mainConnection; // @synthesize mainConnection=_mainConnection;
- (void).cxx_destruct;
- (_Bool)isAccountID:(id)arg1 folderID:(id)arg2 watchedByClientBesides:(id)arg3;
- (void)addPersistentClientWithAccountID:(id)arg1 clientID:(id)arg2 watchedIDs:(id)arg3;
- (void)removeClient:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;
- (void)_setupServerConnection;

@end

