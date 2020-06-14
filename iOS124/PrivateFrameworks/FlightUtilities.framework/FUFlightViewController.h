//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FlightUtilities/FUFlightViewDelegate-Protocol.h>
#import <FlightUtilities/MKMapViewDelegate-Protocol.h>

@class FUFlightView, NSArray, NSDate, NSNumber, NSString;
@protocol FUFlightViewControllerDelegate;

@interface FUFlightViewController : UIViewController <MKMapViewDelegate, FUFlightViewDelegate>
{
    _Bool _loadingFlight;
    NSDate *_startLoadingDate;
    unsigned long long _displayStyle;
    id <FUFlightViewControllerDelegate> _delegate;
    FUFlightView *_regularFlightView;
    FUFlightView *_compactFlightView;
    _Bool _requiresDataLoad;
    _Bool _viewLoaded;
    _Bool _highlightCurrentFlightLeg;
    _Bool _showInfoPanel;
    NSArray *_flights;
    NSNumber *_flightCode;
    NSString *_airlineCode;
}

@property(retain) NSString *airlineCode; // @synthesize airlineCode=_airlineCode;
@property(retain) NSNumber *flightCode; // @synthesize flightCode=_flightCode;
@property(retain) FUFlightView *compactFlightView; // @synthesize compactFlightView=_compactFlightView;
@property(retain) FUFlightView *regularFlightView; // @synthesize regularFlightView=_regularFlightView;
@property(nonatomic) _Bool showInfoPanel; // @synthesize showInfoPanel=_showInfoPanel;
@property(nonatomic) _Bool highlightCurrentFlightLeg; // @synthesize highlightCurrentFlightLeg=_highlightCurrentFlightLeg;
@property(retain, nonatomic) NSArray *flights; // @synthesize flights=_flights;
- (void).cxx_destruct;
@property(readonly, nonatomic) FUFlightView *flightView;
- (void)flightView:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3;
- (struct CGSize)preferredContentSize;
- (void)fadeLayer:(id)arg1 visible:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addFittingView:(id)arg1;
- (void)hideView:(id)arg1;
- (void)showView:(id)arg1;
- (void)showFlightView;
- (void)showErrorView;
- (void)showLoadingView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
@property(nonatomic) long long selectedFlight;
@property(nonatomic) long long selectedLeg;
- (void)setFlights:(id)arg1 selectedFlight:(long long)arg2 selectedLeg:(long long)arg3;
- (void)setNoBackground;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)loadFlightWithFlightCode:(id)arg1 airlineCode:(id)arg2 date:(id)arg3;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithFlightCode:(unsigned long long)arg1 airlineCode:(id)arg2;
- (id)initWithSFFlight:(id)arg1 leg:(long long)arg2 style:(unsigned long long)arg3 delegate:(id)arg4;
- (id)initWithSFFlights:(id)arg1;
- (id)initWithFlights:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

