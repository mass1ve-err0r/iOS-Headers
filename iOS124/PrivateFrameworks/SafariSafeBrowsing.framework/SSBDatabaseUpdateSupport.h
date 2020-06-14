//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTCarrierSpaceClient;

__attribute__((visibility("hidden")))
@interface SSBDatabaseUpdateSupport : NSObject
{
    CTCarrierSpaceClient *_carrierSpaceClient;
    _Bool _onHighCellularDataPlan;
}

@property(readonly, nonatomic) _Bool onHighCellularDataPlan; // @synthesize onHighCellularDataPlan=_onHighCellularDataPlan;
- (void).cxx_destruct;
- (id)fetchCellularDataPlanSynchronously;
- (void)_fetchCellularDataPlan;
- (void)_fetchCellularDataPlanWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

