/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class <EKTravelAdvice>, CLLocation, NSDate;

@interface EKTravelPrediction : NSObject <NSSecureCoding> {
    NSDate *_arrivalDate;
    NSDate *_departureDate;
    NSDate *_predictionDate;
    CLLocation *_startingLocation;
    double _ttl;
    double _validRadius;
}

@property(readonly) <EKTravelAdvice> * advice;
@property(readonly) NSDate * arrivalDate;
@property(readonly) NSDate * departureDate;
@property(readonly) NSDate * predictionDate;
@property(readonly) CLLocation * startingLocation;
@property(readonly) double ttl;
@property(readonly) double validRadius;

+ (BOOL)supportsSecureCoding;

- (id)advice;
- (id)arrivalDate;
- (void)dealloc;
- (id)departureDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDepartureDate:(id)arg1 arrivalDate:(id)arg2 startingLocation:(id)arg3 predictionDate:(id)arg4 pollAggressively:(BOOL)arg5;
- (id)initWithDepartureDate:(id)arg1 arrivalDate:(id)arg2 startingLocation:(id)arg3 validRadius:(double)arg4 predictionDate:(id)arg5 ttl:(double)arg6;
- (BOOL)isExpiredWithLocation:(id)arg1 date:(id)arg2;
- (id)predictionDate;
- (id)startingLocation;
- (double)ttl;
- (double)validRadius;

@end