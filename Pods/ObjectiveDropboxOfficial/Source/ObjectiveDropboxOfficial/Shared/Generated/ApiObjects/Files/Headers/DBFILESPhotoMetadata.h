///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBFILESMediaMetadata.h"
#import "DBSerializableProtocol.h"

@class DBFILESDimensions;
@class DBFILESGpsCoordinates;
@class DBFILESPhotoMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PhotoMetadata` struct.
///
/// Metadata for a photo.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESPhotoMetadata : DBFILESMediaMetadata <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dimensions Dimension of the photo/video.
/// @param location The GPS coordinate of the photo/video.
/// @param timeTaken The timestamp when the photo/video is taken.
///
/// @return An initialized instance.
///
- (instancetype)initWithDimensions:(nullable DBFILESDimensions *)dimensions
                          location:(nullable DBFILESGpsCoordinates *)location
                         timeTaken:(nullable NSDate *)timeTaken;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PhotoMetadata` struct.
///
@interface DBFILESPhotoMetadataSerializer : NSObject

///
/// Serializes `DBFILESPhotoMetadata` instances.
///
/// @param instance An instance of the `DBFILESPhotoMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESPhotoMetadata` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESPhotoMetadata *)instance;

///
/// Deserializes `DBFILESPhotoMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESPhotoMetadata` API object.
///
/// @return An instantiation of the `DBFILESPhotoMetadata` object.
///
+ (DBFILESPhotoMetadata *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
