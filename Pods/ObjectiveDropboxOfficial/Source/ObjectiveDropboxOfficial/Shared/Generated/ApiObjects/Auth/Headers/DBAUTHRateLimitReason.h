///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBAUTHRateLimitReason;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RateLimitReason` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBAUTHRateLimitReason : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBAUTHRateLimitReasonTag` enum type represents the possible tag states
/// with which the `DBAUTHRateLimitReason` union can exist.
typedef NS_ENUM(NSInteger, DBAUTHRateLimitReasonTag) {
  /// You are making too many requests in the past few minutes.
  DBAUTHRateLimitReasonTooManyRequests,

  /// There are currently too many write operations happening in the user's
  /// Dropbox.
  DBAUTHRateLimitReasonTooManyWriteOperations,

  /// (no description).
  DBAUTHRateLimitReasonOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBAUTHRateLimitReasonTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "too_many_requests".
///
/// Description of the "too_many_requests" tag state: You are making too many
/// requests in the past few minutes.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyRequests;

///
/// Initializes union class with tag state of "too_many_write_operations".
///
/// Description of the "too_many_write_operations" tag state: There are
/// currently too many write operations happening in the user's Dropbox.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyWriteOperations;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "too_many_requests".
///
/// @return Whether the union's current tag state has value "too_many_requests".
///
- (BOOL)isTooManyRequests;

///
/// Retrieves whether the union's current tag state has value
/// "too_many_write_operations".
///
/// @return Whether the union's current tag state has value
/// "too_many_write_operations".
///
- (BOOL)isTooManyWriteOperations;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBAUTHRateLimitReason` union.
///
@interface DBAUTHRateLimitReasonSerializer : NSObject

///
/// Serializes `DBAUTHRateLimitReason` instances.
///
/// @param instance An instance of the `DBAUTHRateLimitReason` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBAUTHRateLimitReason` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBAUTHRateLimitReason *)instance;

///
/// Deserializes `DBAUTHRateLimitReason` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBAUTHRateLimitReason` API object.
///
/// @return An instantiation of the `DBAUTHRateLimitReason` object.
///
+ (DBAUTHRateLimitReason *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
