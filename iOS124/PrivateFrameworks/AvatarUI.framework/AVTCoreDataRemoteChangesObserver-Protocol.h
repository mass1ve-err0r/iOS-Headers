//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol AVTCoreDataRemoteChangesObserver
- (_Bool)isObservingChanges;
- (void)startObservingChanges;
- (void)addChangesHandler:(void (^)(NSManagedObjectContext *, NSArray *))arg1;
@end

