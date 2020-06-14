//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXAccessQueue, NSLock, NSMutableArray, NSString;

@interface AXIPCClient : NSObject
{
    struct __CFMachPort *_serverPort;
    NSLock *_serverPortLock;
    unsigned int _assignedServerMachPort;
    CDUnknownBlockType _portDeathHandler;
    float _timeout;
    NSString *_clientIdentifier;
    struct __CFRunLoopSource *_clientSource;
    unsigned long long _connectionAttempts;
    NSMutableArray *_outstandingAsyncRequests;
    _Bool _connected;
    _Bool shouldRegisterCallbackSourceOnMainRunloop;
    _Bool _usesPerPidLookup;
    unsigned int clientCallbackPort;
    int _pid;
    NSString *_serviceName;
    NSMutableArray *_postConnectionTasks;
    AXAccessQueue *_connectionQueue;
    struct __CFRunLoopSource *clientCallbackSource;
    AXAccessQueue *_portDeathAccessQueue;
}

+ (id)allClients;
+ (void)initialize;
@property(retain, nonatomic) AXAccessQueue *portDeathAccessQueue; // @synthesize portDeathAccessQueue=_portDeathAccessQueue;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) _Bool usesPerPidLookup; // @synthesize usesPerPidLookup=_usesPerPidLookup;
@property(nonatomic) _Bool shouldRegisterCallbackSourceOnMainRunloop; // @synthesize shouldRegisterCallbackSourceOnMainRunloop;
@property(retain, nonatomic) AXAccessQueue *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableArray *postConnectionTasks; // @synthesize postConnectionTasks=_postConnectionTasks;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) float timeout; // @synthesize timeout=_timeout;
@property(nonatomic) struct __CFMachPort *serverPort; // @synthesize serverPort=_serverPort;
@property(copy, nonatomic) CDUnknownBlockType portDeathHandler; // @synthesize portDeathHandler=_portDeathHandler;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (id)_descriptionForMachError:(int)arg1;
- (_Bool)_handleErrorWithMessage:(id)arg1 outError:(id *)arg2;
- (_Bool)_handleErrorWithMessage:(id)arg1 machError:(int)arg2 outError:(id *)arg3;
- (void)establishConnectionWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_attemptToEstablishConnection;
- (void)_serverDied;
- (id)_createRegistrationWithReplyMachPort:(unsigned int)arg1 forAsyncReplyOnQueue:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (_Bool)sendAsyncMessage:(id)arg1 replyOnQueue:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)sendAsyncMessage:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (id)sendMessage:(id)arg1 withError:(id *)arg2;
- (_Bool)sendSimpleMessage:(id)arg1 synchronizationPort:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)sendSimpleMessage:(id)arg1 withError:(id *)arg2;
- (_Bool)_prepareToSendMessage:(id)arg1 withError:(id *)arg2 prepSuccessHandler:(CDUnknownBlockType)arg3;
- (void)sendSimpleMessage:(id)arg1;
- (_Bool)_verifyConnectionWithError:(id *)arg1;
- (_Bool)disconnectWithError:(id *)arg1;
- (_Bool)connectWithError:(id *)arg1;
- (_Bool)verifyConnectionExists;
- (void)_sendRegistrationMessageWithRetries:(int)arg1;
- (void)_registerWithServer;
@property(readonly, nonatomic) unsigned int clientCallbackPort; // @synthesize clientCallbackPort;
@property(readonly, nonatomic) struct __CFRunLoopSource *clientCallbackSource; // @synthesize clientCallbackSource;
@property(readonly, nonatomic) unsigned int serviceMachPort;
- (id)description;
- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithServiceName:(id)arg1;
- (void)_commonInit;

@end
