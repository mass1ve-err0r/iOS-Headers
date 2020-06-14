//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BLBookInstallOperationProgressDelegate-Protocol.h"
#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class BLDatabaseManager, NSArray, NSFetchedResultsController, NSMutableDictionary, NSOperationQueue, NSString;
@protocol BLBookInstallManagerProgressDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLBookInstallManager : NSObject <NSFetchedResultsControllerDelegate, BLBookInstallOperationProgressDelegate>
{
    id <BLBookInstallManagerProgressDelegate> _progressDelegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BLDatabaseManager *_databaseManager;
    NSFetchedResultsController *_frc;
    NSOperationQueue *_queue;
    NSMutableDictionary *_operationsByDownloadID;
    NSArray *_pendingInterruptedInstalls;
}

@property(retain, nonatomic) NSArray *pendingInterruptedInstalls; // @synthesize pendingInterruptedInstalls=_pendingInterruptedInstalls;
@property(retain, nonatomic) NSMutableDictionary *operationsByDownloadID; // @synthesize operationsByDownloadID=_operationsByDownloadID;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSFetchedResultsController *frc; // @synthesize frc=_frc;
@property(nonatomic) __weak BLDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) __weak id <BLBookInstallManagerProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
- (void).cxx_destruct;
- (void)dq_notifyServerOfDownloadCancelledForInstallOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dq_notifyServerOfDownloadCompleteForInstallOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dq_completeOperationForDownloadID:(id)arg1;
- (void)dq_failOperationForDownloadID:(id)arg1;
- (_Bool)_assetAlreadyStartedTheInstallationStage:(long long)arg1;
- (void)dq_dequeueOperationForDownloadID:(id)arg1 downloadState:(long long)arg2;
- (void)dq_enqueueInstall:(id)arg1;
- (void)mq_installDownloadInfo:(id)arg1;
- (void)operation:(id)arg1 updatedProgress:(id)arg2 forInstall:(id)arg3;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)restartInterruptedInstalls:(CDUnknownBlockType)arg1;
- (void)cancelInstallWithDownloadID:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithDatabaseManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

