[#ftl]
${copyright}
${autogenNote}

package ${javaPackage};

/**
 * Base for all autogenerated classes.
 */

public abstract class ${javaBaseObject}
{
	private long handle;

	/**
	 * Prevent default construction (internal use only).
	 *
	 * @param dummy Ignored
	 */

	protected ${javaBaseObject}(boolean dummy)
	{
	}

	/**
	 * Set the native object handle (internal use only).
	 *
	 * @param handle The native object handle.
	 */

	protected void setHandle(long handle)
	{
		this.handle = handle;
	}

	/**
	 * Get the native object handle (internal use only).
	 *
	 * @return The native object handle
	 */

	public long getHandle()
	{
		return handle;
	}

	/**
	 * Perform native cleanup (internal use only).
	 */

	protected abstract void onFinalize();

	/**
	 * Calls onFinalize (internal use only).
	 */

	protected void finalize()
	{
		onFinalize();
	}
}
