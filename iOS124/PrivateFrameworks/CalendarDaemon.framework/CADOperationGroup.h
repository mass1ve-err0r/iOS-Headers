//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ClientConnection;

__attribute__((visibility("hidden")))
@interface CADOperationGroup : NSObject
{
    ClientConnection *_conn;
}

+ (id)whitelistedBundles;
+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
@property(readonly, nonatomic) ClientConnection *conn; // @synthesize conn=_conn;
- (void).cxx_destruct;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;
- (id)initWithClientConnection:(id)arg1;

@end

