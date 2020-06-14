//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class MKPlaceReservationRowView, NSString, _MKPlaceReservationInfo;

__attribute__((visibility("hidden")))
@interface MKPlaceReservationViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol>
{
    MKPlaceReservationRowView *_reservationCell;
    _MKPlaceReservationInfo *_reservationInfo;
}

@property(retain, nonatomic) _MKPlaceReservationInfo *reservationInfo; // @synthesize reservationInfo=_reservationInfo;
- (void).cxx_destruct;
- (void)_updateReservationInfoAnimated:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

