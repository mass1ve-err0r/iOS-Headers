//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSKDocumentRootICloudObserver : NSObject
{
    long long _identifier;
    CDUnknownBlockType _block;
    _Bool _suspendedCollaboration;
    long long _identifer;
}

@property(readonly, nonatomic) _Bool suspendedCollaboration; // @synthesize suspendedCollaboration=_suspendedCollaboration;
@property(readonly, nonatomic) long long identifer; // @synthesize identifer=_identifer;
- (void).cxx_destruct;
- (void)invokeWithDocumentRoot:(id)arg1;
- (id)initWithSuspendedCollaboration:(_Bool)arg1 block:(CDUnknownBlockType)arg2;

@end

